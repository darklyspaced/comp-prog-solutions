#![feature(iter_array_chunks)]
#![allow(unused)]
use std::str;

fn main() {
    let file = include_str!("input.txt");
    let mut decoded_payload = vec![];
    let mut ans: [String; 32] = Default::default();

    for line in file.lines() {
        if &line[0..4] == "5555" {
            let seq = u32::from_str_radix(&line[12..14], 16).unwrap();
            let checksum = u32::from_str_radix(&line[14..16], 16).unwrap();
            let payload = &line[16..];
            let mut sum_of_payload = vec![];

            for byte in payload.chars().array_chunks::<2>() {
                let byte = byte.iter().collect::<String>();
                let num = u32::from_str_radix(&byte, 16).unwrap();
                sum_of_payload.push(num);
            }

            if sum_of_payload.iter().sum::<u32>() % 256 == checksum {
                decoded_payload = hex::decode(&line[16..]).unwrap();

                match str::from_utf8(&decoded_payload) {
                    Ok(r) => ans[seq as usize] = (r.to_owned()),
                    _ => panic!("Invalide decoding"),
                }
            }
        }
    }
    println!("{}", ans.join(""));
}

// PART 1:
// fn main() {
//     let lines = include_str!("input.txt").lines().collect::<Vec<_>>();
//     let groups = lines
//         .split(|line| line.is_empty())
//         .map(|group| {
//             group
//                 .iter()
//                 .map(|item| item.parse::<u32>().unwrap())
//                 .sum::<u32>()
//         })
//         .max()
//         .unwrap();
//     println!("{groups:?}");
// }

fn main() {
    let lines = include_str!("input.txt").lines().collect::<Vec<_>>();
    let mut groups = lines
        .split(|line| line.is_empty())
        .map(|group| {
            group
                .iter()
                .map(|item| item.parse::<u32>().unwrap())
                .sum::<u32>()
        })
        .collect::<Vec<_>>();
    groups.sort();
    let groups = groups.into_iter().rev().take(3).sum::<u32>();
    println!("{groups}")
}

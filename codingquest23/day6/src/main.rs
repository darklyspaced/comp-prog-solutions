fn main() {
    let file = include_str!("input.txt");
    let mut space = [[b'.'; 100]; 100];

    for line in file.lines() {
        let line = line
            .split(" ")
            .map(|num| num.parse::<isize>().unwrap())
            .collect::<Vec<_>>();

        let init_x = line[0] + line[2] * 3600;
        let init_y = line[1] + line[3] * 3600;

        for s in 0..=60 {
            let x = init_x + line[2] * s;
            let y = init_y + line[3] * s;
            let bounds = 0..=99;

            if bounds.contains(&x) && bounds.contains(&y) {
                space[y as usize][x as usize] = b'#';
            }
        }
    }

    for (y, line) in space.into_iter().enumerate() {
        for (x, i) in line.into_iter().enumerate() {
            if i == b'.' {
                println!("{} {}", x, y);
            }
        }
    }
}

fn main() {
    let file = include_str!("input.txt");
    let mut screen = vec![str::repeat(".", 50); 10];

    for line in file.lines() {
        let line = line
            .split(" ")
            .map(|num| num.parse::<usize>().unwrap())
            .collect::<Vec<_>>();

        let x = line[0];
        let y = line[1];
        let width = line[2];
        let height = line[3];

        for i in y..y + height {
            let row = &mut screen[i];
            let updated = &row[x..x + width]
                .chars()
                .map(|char| match char {
                    '.' => '#',
                    '#' => '.',
                    _ => panic!("Just how."),
                })
                .collect::<String>();
            row.replace_range(x..x + width, updated);
        }
        for line in screen.iter() {
            println!("{line}");
        }
    }
}

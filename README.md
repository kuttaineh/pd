# payd
An amorative payment determiner
>Because your time increases in value the longer you're on project.

## Installation
```
git clone https://github.com/kuttaineh/payd.cpp
cd payd
g++ -o payd payd.cpp
```

## Usage
Payd returns a new hourly rate of pay each day.
```
./payd <day> <worth>
```
**payd** asks for two variables: your day on task and your self-determined worth while performing that day (grade yourself)

Example: `./payd 2 100`
Interpretation: On day 2 of task I gave 100%

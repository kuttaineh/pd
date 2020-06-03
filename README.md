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
```
./payd <day> <worth>
```
payd asks for two variable: your day on task and your self determined worth while performing that day (grade yourself)

ie: ```./payd 2 100```
Interpretation: On day 2 of task I gave 100%

payd returns your hourly rate of pay for said day.

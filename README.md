# payd
An amorative payment determiner
>Because your time increases in value the longer you're on project.

## Installation
```
git clone https://github.com/kuttaineh/payd.git
cd payd
g++ -o payd payd.cpp
```

## Usage
Payd returns a new hourly rate of pay each day.
```
./payd <day> <worth>
```
Asks for two variables: day on task and performance worth for the day.

Example: `./payd 2 100`
Read: On day 2 of task I gave 100%

Whether it is the worker, the employer, or some negotiated final value between the two which determines the worth of the work performed is matter left up to the parties involved.

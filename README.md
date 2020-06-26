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

Whether it is the employee, the employer, or some negotiated final value between the two which determines the worth of the work performed is a matter left to the parties involved.

## Motivation
For project managers and software engineers to prepair good works in advance: these are motivated, to the extent possible, to be as straightforward in the production of their artifacts as possible, reducing the task of implimentation to be completed on the backend quickly. This tool creates an inherent financial incentive to provide as simple, yet complete, a development roadmap as necessary so as to produce software units in the most efficient way possible. 

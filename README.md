# pd
An amorative payment determiner
>Because your time increases in value the longer you're on project.

## Vision
For entrepreneurs and other potential product owners: these can offer future returns to programmers in the form of a security composed of a record of work with determined daily worth contributions. So in effect programmers would be lending their labor in exchange for a promissory note, the value of which is determined by this tool.

## Motivation
For project managers and software engineers to prepare good works in advance: thru pd, these are motivated to be as straightforward as possible with their artifacts, reducing the task of implementation to be completed in code quickly. This tool creates an inherent financial incentive to provide as simple, yet complete, a development roadmap as necessary so as to produce software units in the most efficient way possible. 

## Installation
```
git clone https://github.com/kuttaineh/pd.git
cd pd
g++ -o pd pd.cpp
sudo mv pd /usr/local/bin/
```

## Usage
pd (pronounced: paid) returns a new hourly rate of pay each day.
```
pd DAY WORTH
```
Asks for two variables: day on task and value-added for the day.

Example: `pd 2 100`
Read: On day 2 of task, 100% towards the solution needed was provided.

Whether it is the employee, the employer, or some negotiated final value between the two which determines the worth of the work performed is a matter left to the parties involved.

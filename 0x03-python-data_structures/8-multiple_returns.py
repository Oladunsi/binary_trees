#!/usr/bin/python3

def multiple_returns(sentence):
    if len(sentence) == 0:
        return 0, None
    new = sentence.split(" ")
    return len(new[0]), new[0][0]
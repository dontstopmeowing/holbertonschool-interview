#!/usr/bin/python3

def canUnlockAll(boxes):
    """
        Function that determines if all the boxes can be opened.
    """
    keys = [0]
    for key in keys:
        for i in boxes[key]:
            if i not in keys and i < len(boxes):
                keys.append(i)
    if len(keys) == len(boxes):
        return True
    return False

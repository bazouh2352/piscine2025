#!/bin/bash

prout='find .. -type f -name "*" -print | sed "s|.*/||" | cut -f1 -d .'


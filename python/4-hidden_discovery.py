#!/usr/bin/python3

import importlib
import dis

module = importlib.import_module('hidden_4')
code = module.__code__

names = []

for instruction in dis.get_instructions(code):
    if instruction.opname == 'LOAD_NAME':
        name = intruction.argval
        if not name.startswith('__') and name not in names:
            names.append(name)

for name in sorted(names):
    print(name)



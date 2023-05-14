#!/usr/bin/python3

#mclip.py - a multi-clipboard program
import pyperclip

TEXT = {'agree': """Yes, I agree That sounds fine to me""",
        'busy': """Sorry can we do this later this week or next week""",
        'upsell': """Would you consider making this a montly donation?"""}

import sys
if len(sys.argv) > 2:
    print('Usage: python mclip.py [Keyphrase] -copy phrase text')
    sys.exit()
keyPhrase = sys.argv[1] #first command line arg is the keyphase

if keyPhrase in TEXT:
    pyperclip.copy(TEXT[keyPhrase])
    print('Text for ' + keyPhrase + ' Copied to clipboard')
else:
    print('There is no text for' + keyphrase)



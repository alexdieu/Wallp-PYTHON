# Wallp-PYTHON
THIS IS A PYTHON EXTENSION SPECIALLY MADE TO CHANGE WINDOWS 10 BACKGROUND

## HOW DO I USE ?

Example code :

```

import wallp
import time

while True:
  for i in range(15):
    wallp.wallpa("C:\\Users\\alexdieu\\Pictures\\DECOMPILED_GIF\\%s.png" %i )
    time.sleep(0.05)

```

### HOW DO I BUILD ?

Use  `python setup.py install`

#### COMPILED IS ONLY FOR 32 BIT WINDOWS .

If you don't have visual studio installed , go to compiled folder and copy/paste files in :  Python38folder/Lib/site-packages

How do i find python38folder ? execute that :

```
import os,sys

print(os.path.dirname(sys.executable))

```

#### HOW IS IT WORKING ? 

`windows.h` lib.

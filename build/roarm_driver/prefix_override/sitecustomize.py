import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/v1/Desktop/Beizo/arm_ws/install/roarm_driver'

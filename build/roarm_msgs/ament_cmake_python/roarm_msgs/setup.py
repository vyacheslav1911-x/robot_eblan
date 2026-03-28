from setuptools import find_packages
from setuptools import setup

setup(
    name='roarm_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('roarm_msgs', 'roarm_msgs.*')),
)

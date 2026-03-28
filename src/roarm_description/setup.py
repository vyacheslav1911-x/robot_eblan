import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'roarm_description'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
        (os.path.join('share', package_name, 'urdf'), glob('urdf/*.xacro')),
        (os.path.join('share', package_name, 'urdf', 'roarm_m3'), glob('urdf/roarm_m3/*')),
        (os.path.join('share', package_name, 'meshes', 'roarm_m3'), glob('meshes/roarm_m3/*')),
        (os.path.join('share', package_name, 'rviz'), glob('rviz/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='v1',
    maintainer_email='v1@todo.todo',
    description='RoArm M3 Pro robot description',
    license='MIT',
    entry_points={
        'console_scripts': [],
    },
)
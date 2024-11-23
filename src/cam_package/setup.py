from setuptools import find_packages, setup

package_name = 'cam_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tomy',
    maintainer_email='juantomas.soria@outlook.es',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': ['publisher_node = cam_package.camPublisher:main',
        'subscriber_node = cam_package.camSubscriber:main',
        ],
    },
)

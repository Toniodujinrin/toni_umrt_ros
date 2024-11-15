from setuptools import find_packages
from setuptools import setup

setup(
    name='telemetry_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('telemetry_interfaces', 'telemetry_interfaces.*')),
)

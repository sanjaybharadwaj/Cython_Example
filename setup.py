from distutils.core import setup
from Cython.Build import cythonize

setup(
	ext_modules = cythonize("sam1.pyx",
                                language="c++",
))


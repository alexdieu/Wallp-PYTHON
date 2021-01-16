from distutils.core import setup, Extension
setup(name = 'wallp', version = '0.0.1',  ext_modules = [Extension('wallp', ['wallp.c'])])

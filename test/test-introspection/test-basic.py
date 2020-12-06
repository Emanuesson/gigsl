#!/usr/bin/env python

import sys
import math
import unittest

#import h5py
#import numpy

import gi

"""
Please don't forget to export the environment variables for GIR. E.g.:
GI_TYPELIB_PATH=$GI_TYPELIB_PATH:/usr/local/lib/girepository-1.0/
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib/

To test this script, simply execute from the build-directory with:
GI_TYPELIB_PATH=$GI_TYPELIB_PATH:./libggsl; \
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./libggsl; \
python3 ../test/test-introspection/test-basic.py
"""

class BasicTest(unittest.TestCase):
    def setUp(self):
        gi.require_version ('Gtk', '3.0')
        gi.require_version ('LibGgsl', '1.0')

    def testCalculation(self):
        from gi.repository import GObject, GLib, Gio, Gtk, LibGgsl
        print(dir(LibGgsl))

    def testVector(self):
        from gi.repository import GObject, GLib, Gio, Gtk, LibGgsl
        Vector = LibGgsl.vector_alloc(5)
        print(dir(Vector))
        Vector.set(4, 18.98)
        print(Vector.get(4))

if __name__ == '__main__':
    unittest.main()

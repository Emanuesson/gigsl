#!/usr/bin/env python

import unittest
import gi

class BasicTest(unittest.TestCase):
    def setUp(self):
        gi.require_version ('Gtk', '3.0')
        gi.require_version ('LibGsl', '1.0')

    def testBlockDoubleAlloc(self):
        from gi.repository import GObject, GLib, Gio, Gtk, LibGsl
        Block = LibGsl.block_alloc(5)
        self.assertIsInstance(Block, gi.repository.LibGsl.Block)
        self.assertEqual(Block.size(), 5)

    def testBlockDoubleCalloc(self):
        from gi.repository import GObject, GLib, Gio, Gtk, LibGsl
        Block = LibGsl.block_calloc(5)
        self.assertIsInstance(Block, gi.repository.LibGsl.Block)
        self.assertEqual(Block.size(), 5)
        print(dir(Block))
#        self.assertEqual(Block.data()[0], 0)

if __name__ == '__main__':
    unittest.main()

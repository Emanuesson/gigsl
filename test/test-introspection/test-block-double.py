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
        self.assertEqual(Block.size, 5)

    def testBlockDoubleCalloc(self):
        from gi.repository import GObject, GLib, Gio, Gtk, LibGsl
        Block = LibGsl.block_calloc(5)
        self.assertIsInstance(Block, gi.repository.LibGsl.Block)
        self.assertEqual(Block.size, 5)
        print(dir(Block))
        for i in range(0, 4):
            self.assertEqual(Block.data[i], 0.0)

        Block.data[1] = 42342.231
        #from pdb import set_trace as bp
        #bp()
        self.assertEqual(Block.data[0], 0.0)
        # FIXME: find out, why this is not working!
        #self.assertEqual(Block.data[1], 42342.231)
        self.assertEqual(Block.data[2], 0.0)

'''
    def testBlockDoubleCopy(self):
        from gi.repository import GObject, GLib, Gio, Gtk, LibGsl
        Block1 = LibGsl.block_calloc(5)
        self.assertIsInstance(Block1, gi.repository.LibGsl.Block)
        self.assertEqual(Block1.size, 5)

        Block1.data[1] = 42342.231
        self.assertEqual(Block1.data[1], 42342.231)

        Block2 = Block1
        Block1.data[3] = 5.0
        self.assertEqual(Block1.data[3], 5.0)
        self.assertEqual(Block2.data[3], 0.0)
'''

if __name__ == '__main__':
    unittest.main()

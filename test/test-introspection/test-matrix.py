#!/usr/bin/env python

import unittest
import gi

class MatrixTest(unittest.TestCase):
    def setUp(self):
        gi.require_version ('Gtk', '3.0')
        gi.require_version ('LibGsl', '1.0')

    def testMatrixDoubleAlloc(self):
        from gi.repository import GObject, GLib, Gio, Gtk, LibGsl
        Matrix = LibGsl.matrix_calloc(5, 2)
        self.assertIsInstance(Matrix, gi.repository.LibGsl.Matrix)
        Block = Matrix.block
        for i in range(0, 5 * 2):
            self.assertEqual(Block.data[i], 0.0)
#        print(dir(Matrix))
#        self.assertEqual(Matrix.block.size, 5*2)

'''
    def testMatrixDoubleCalloc(self):
        from gi.repository import GObject, GLib, Gio, Gtk, LibGsl
        Block = LibGsl.block_calloc(5)
        self.assertIsInstance(Block, gi.repository.LibGsl.Block)
        self.assertEqual(Block.size, 5)
        print(dir(Block))
        for i in range(0, 4):
            self.assertEqual(Block.data[i], 0.0)

#        Block.data[1] = 42342.231
#        self.assertEqual(Block.data[0], 0.0)
#        self.assertEqual(Block.data[2], 0.0)
'''

if __name__ == '__main__':
    unittest.main()

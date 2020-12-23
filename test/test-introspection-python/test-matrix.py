#!/usr/bin/env python

import unittest
import gi

class MatrixTest(unittest.TestCase):
    def setUp(self):
#        gi.require_version ('Gtk', '3.0')
        gi.require_version ('LibGsl', '1.0')

    def testMatrixDoubleAlloc(self):
        from gi.repository import GObject, GLib, Gio, LibGsl
        Matrix = LibGsl.matrix_calloc(5, 2)
        self.assertIsInstance(Matrix, gi.repository.LibGsl.Matrix)
        Matrix.set(1,1,GLib.MAXDOUBLE)

        self.assertIsInstance(Matrix.block, gi.repository.LibGsl.Block)
        self.assertEqual(Matrix.block.size, 5*2)
        Block = Matrix.block
        self.assertEqual(Block.size, 10)
        for i in range(0, 5 * 2):
            self.assertEqual(Block.data[i], 0.0)

    def testMatrixDoubleCalloc(self):
        from gi.repository import GObject, GLib, Gio, LibGsl
        Matrix = LibGsl.matrix_calloc(5, 2)
        Matrix.set(1,1,199141.89)

        self.assertEqual(Matrix.get(1,1), 199141.89)
        Matrix.block.data[1] = 42342.231
        self.assertEqual(Matrix.block.data[0], 0.0)
        self.assertEqual(Matrix.block.data[2], 0.0)

if __name__ == '__main__':
    unittest.main()

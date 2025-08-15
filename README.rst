Plugin fixing System.exit for Kirikiri
======================================

This plugin fixes ``System.exit`` in Kirikiri2 / 吉里吉里2 / KirikiriZ /
吉里吉里Z by using ``TerminateProcess`` instead of ``PostQuitMessage``,
which will allow it to work even if the event loop is hung.

Building
--------

After cloning submodules and placing ``ncbind`` and ``tp_stub`` in the
parent directory, a simple ``make`` will generate
``krprocesssuicide.dll``.

How to use
----------

After ``Plugins.link("krprocesssuicide.dll");`` is used, the
``System.exit`` function will be overridden.

License
-------

This project is licensed under the MIT license. Please read the
``LICENSE`` file for more information.

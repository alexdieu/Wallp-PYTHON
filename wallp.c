#include <stdio.h>
#include <Python.h>
#include <windows.h>
#pragma comment(lib, "user32.lib")

static PyObject* wallpaper(PyObject* self, PyObject* args) 
{   
    const char *name;
    if (!PyArg_ParseTuple(args, "s", &name)) {
        return NULL;
    }
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, name, SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE);
    Py_RETURN_NONE;
}


static PyMethodDef wallpa[] = {
	{ "wallpa", wallpaper, METH_VARARGS, "Change windows wallpaper" },
    { NULL, NULL, 0, NULL }
};

static struct PyModuleDef module_array = {
    PyModuleDef_HEAD_INIT,
    "wallp",
    "CHANGE WINDOWS WALLPAPER",
    -1,
    wallpa
};

PyMODINIT_FUNC PyInit_wallp(void)
{
    return PyModule_Create(&module_array);
}

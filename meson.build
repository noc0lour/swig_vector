project('swig_vector', 'cpp')
src = 'swig_vector.cpp'
cpplib = shared_library('swig_vector',
                        src,
                        install: true,
                        install_dir: 'lib/')

swig = find_program('swig')

swig_src = '../swig_vector.i'

inc_dir = include_directories('.')
subdir('python2')
subdir('python3')

add_test_setup('py2', exe_wrapper: 'python2', env: 'PYTHONPATH=./python2')
add_test_setup('py3', exe_wrapper: 'python3', env: 'PYTHONPATH=./python3')
test_vector = find_program('test_vector.py')
test('test_vector', test_vector)
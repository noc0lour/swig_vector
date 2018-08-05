project('swig_vector', 'cpp')
src = 'swig_vector.cpp'
cpplib = shared_library('swig_vector',
                        src,
                        install: true,
                        install_dir: 'lib/')

swig = find_program('swig')
gen_swig = generator(swig,
                     #depfile: '@BASENAME@_wrap.d',
                     output: '@BASENAME@_wrap.cxx',
                     arguments: ['-c++', '-python',
                                '-MMD', '-o', '@OUTPUT@',
                                '@INPUT@'])
swig_src = '../swig_vector.i'

inc_dir = include_directories('.')
subdir('python2')
subdir('python3')

install_data('swig_vector.py', install_dir:'lib/python2.7/site-packages/swig_vector/', rename: '__init__.py')
install_data('swig_vector.py', install_dir:'lib/python3.6/site-packages/swig_vector/', rename: '__init__.py')

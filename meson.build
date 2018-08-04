project('swig_vector', 'cpp')
src = 'swig_vector.cpp'
cpplib = shared_library('swig_vector', src)

swig = find_program('swig')
gen_swig = generator(swig,
                     depfile: 'dependencies.txt',
                     output: '@BASENAME@_wrap.cxx',
                     arguments: ['-c++', '-python', '-outdir', '.', '-MF', '@BUILD_DIR@/dependencies.txt', '-o', './@OUTPUT@', '@INPUT@'])
swig_src = './swig_vector.i'
gen_src = gen_swig.process(swig_src)

py3_dep = dependency('python-3.6')
shared_module('_' + swig_src.split('.')[-2].strip('/'),
              gen_src,
              link_with: cpplib,
              dependencies: py3_dep,
              install:true,
              install_dir: 'lib/',
              name_prefix: '')

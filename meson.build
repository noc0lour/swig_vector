project('swig_vector', 'cpp')
src = 'swig_vector.cpp'
cpplib = shared_library('swig_vector', src)

swig = find_program('swig')
gen_swig = generator(swig,
                     depfile: '@BASENAME@_wrap.d',
                     output: '@BASENAME@_wrap.cxx',
                     arguments: ['-c++', '-python',
                                '-outdir', '.', '-MMD',
                                '-o', './@OUTPUT@',
                                '@INPUT@'])
swig_src = './swig_vector.i'
gen_src = gen_swig.process(swig_src)

py2_dep = dependency('python-2.7')
py2_module = shared_module('py2_' + swig_src.split('.')[-2].strip('/'),
              gen_src,
              link_with: cpplib,
              dependencies: py2_dep,
              install:true,
              install_dir: 'lib/',
              name_prefix: '')

py3_dep = dependency('python-3.6')
shared_module('py3_' + swig_src.split('.')[-2].strip('/'),
              gen_src,
              link_with: cpplib,
              dependencies: py3_dep,
              install:true,
              install_dir: 'lib/',
              name_prefix: '')

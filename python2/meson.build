
gen_src = gen_swig.process(swig_src)

py2_dep = dependency('python-2.7')
shared_module('_' + swig_src.split('.')[-2].strip('/'),
              gen_src,
              link_with: cpplib,
              dependencies: py2_dep,
              install:true,
              install_dir: 'lib/python2.7/site-packages/',
              include_directories: inc_dir,
              name_prefix: '')


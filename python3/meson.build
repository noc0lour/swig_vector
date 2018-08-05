gen_src = gen_swig.process(swig_src)
py3_dep = dependency('python-3.6')
shared_module('_' + swig_src.split('.')[-2].strip('/'),
              gen_src,
              link_with: cpplib,
              dependencies: py3_dep,
              install:true,
              install_dir: 'lib/python3.6/site-packages/',
              include_directories: inc_dir,
              name_prefix: '')

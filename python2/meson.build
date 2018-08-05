gen_src = custom_target('py2_swig',
              input: swig_src,
              output: ['@BASENAME@_wrap.cxx', '@BASENAME@.py'],
              command: [swig, '-c++', '-python', '-o', '@OUTPUT0@', '@INPUT@']
              )

py2_dep = dependency('python-2.7')
shared_module('_' + swig_src.split('.')[-2].strip('/'),
              gen_src,
              link_with: cpplib,
              dependencies: py2_dep,
              install:true,
              install_dir: 'lib/python2.7/site-packages/',
              include_directories: inc_dir,
              name_prefix: '')

cp = find_program('cp')
install_src = custom_target('py2_install',
            input: gen_src[1],
            output: '__init__.py',
            command: [cp, '@INPUT@', '@OUTPUT@'],
            install:true,
            install_dir: 'lib/python2.7/site-packages/swig_vector'
            )

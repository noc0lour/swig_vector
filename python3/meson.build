gen_src = custom_target('py3_swig',
              input: swig_src,
              output: ['@BASENAME@_wrap.cxx', '@BASENAME@.py'],
              command: [swig, '-c++', '-python', '-py3', '-o', '@OUTPUT0@', '@INPUT@']
              )
py3_dep = dependency('python-3.6')
shared_module('_' + swig_src.split('.')[-2].strip('/'),
              gen_src[0],
              link_with: cpplib,
              dependencies: py3_dep,
              install:true,
              install_dir: 'lib/python3.6/site-packages/',
              include_directories: inc_dir,
              name_prefix: '')

cp = find_program('cp')
install_src = custom_target('py3_install',
            input: gen_src[1],
            output: '__init__.py',
            command: [cp, '@INPUT@', '@OUTPUT@'],
            install:true,
            install_dir: 'lib/python3.6/site-packages/swig_vector'
            )

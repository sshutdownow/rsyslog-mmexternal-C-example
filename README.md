# rsyslog-mmexternal-C-example
rsyslog mmexternal plugin C example

[rsyslog8 has ability to use external programs(modules) that modify message is desired way.](http://www.rsyslog.com/doc/v8-stable/configuration/modules/mmexternal.html)

Documenation for this feature is very weak, so I have to read rsyslog's source to understand how to write plugin. It do very simple work - strip message before '|' char. You may modify it to your needs.


### Copyright

  Copyright (c) 2017 Igor Popov

License
-------
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

### Authors

  Igor Popov
  (ipopovi |at| gmail |dot| com)

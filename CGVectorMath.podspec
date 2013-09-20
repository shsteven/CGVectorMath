Pod::Spec.new do |s|

  s.name         = "CGVectorMath"
  s.version      = "0.1"
  s.summary      = "CGVector math additions. Prefixed. For SpriteKit lovers."

  s.description  = <<-DESC
                   A set of vector math operation macros.
                   DESC

  s.homepage     = "https://github.com/shsteven/CGVectorMath"

  s.license      = 'MIT'

  s.author       = { "Steven Zhang" => "shsteven1000@gmail.com" }

  #  When using multiple platforms
  s.ios.deployment_target = '7.0'
  s.osx.deployment_target = '10.9'

  s.source       = { :git => "https://github.com/shsteven/CGVectorMath.git", :tag => "0.1" }

  s.source_files  = 'CGVectorMath.h'

  s.public_header_files = 'CGVectorMath.h'

end

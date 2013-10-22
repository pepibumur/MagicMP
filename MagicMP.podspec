Pod::Spec.new do |s|
  s.name         = 'MagicMP'
  s.license      = 'MIT'
  s.platform = :ios, '7.0'
  s.version      = '1.0.3'                                                                  # 1
  s.summary      = 'MultiPeer framework done better' # 2
  s.author       = { 'Pedro Piñera' => 'pepibumur@gmail.com' }                            # 3
  s.homepage     = "https://github.com/pepibumur/PPiShowtime-Google-iOS-Library"
  s.source       = { :git => 'https://github.com/pepibumur/MagicMP.git' , :tag => '1.0.3'}      # 4
  s.ios.deployment_target = '7.0'
  s.source_files = 'MagicMP/*'
  s.requires_arc = true
  s.frameworks = 'MultipeerConnectivity'
end

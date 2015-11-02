Pod::Spec.new do |s|

  s.name         = "WoorldsSDK"
  s.version      = "0.1.3"
  s.summary      = "Woorlds SDK"

  s.description  = <<-DESC
                   Woorlds SDK for iPhone.
                   DESC

  s.homepage     = "http://www.woorlds.com"
  s.license      = {
    :type => 'Commercial',
    :text => <<-LICENSE
            (c) Woorlds
    LICENSE
  }
  s.author       = { "leviyehonatan" => "yehonatan@woorlds.com" }
  s.platform     = :ios, "7.0"
  s.source        = { :git => "https://github.com/woorlds-sdk/pod.git" }

  s.source_files = '*.h'
  s.resource = 'VlcSdkRes.bundle'
  s.frameworks = "CoreLocation", "CoreBluetooth"
  s.libraries = "WoorldsSdk"
  s.preserve_paths = 'libWoorldsSdk.a'
  s.xcconfig     = { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/WoorldsSdk"' }
  d

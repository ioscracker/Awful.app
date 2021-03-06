Pod::Spec.new do |s|
  s.name         = "HTMLReader"
  s.version      = "0.5.2"
  s.summary      = "A WHATWG-compliant HTML parser in Objective-C."
  s.homepage     = "https://github.com/nolanw/HTMLReader"
  s.license      = "Public domain"
  s.author       = { "Nolan Waite" => "nolan@nolanw.ca" }
  s.source       = { :git => "https://github.com/nolanw/HTMLReader.git", :tag => "v0.5.2" }
  s.source_files = "Code"
  s.requires_arc = true
end

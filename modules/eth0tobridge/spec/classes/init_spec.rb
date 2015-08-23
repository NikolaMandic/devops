require 'spec_helper'
describe 'eth0tobridge' do

  context 'with defaults for all parameters' do
    it { should contain_class('eth0tobridge') }
  end
end

require 'spec_helper'
describe 'rdo' do

  context 'with defaults for all parameters' do
    it { should contain_class('rdo') }
  end
end

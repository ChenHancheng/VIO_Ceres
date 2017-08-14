#ifndef _CONFIG_H_
#define _CONFIG_H_

namespace myslam
{
	class Config
	{
	private:
		static std::shared_ptr<Config> config_;
		cv::FileStorage file_;

		Config(){}
	public:
		~Config();

		static void setParameterFile( const std::string& filename);
		
		template<typename T>
		static T get(cosnt std::string& key)
		{
			return T(Config::config_->file_[key])
		}
	};
}
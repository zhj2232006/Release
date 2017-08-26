﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "HelloWorldReflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(helloworld::MainWindow)
			IMPL_CPP_TYPE_INFO(helloworld::MainWindowConstructor)
			IMPL_CPP_TYPE_INFO(vm::IViewModel)

#define _ ,
			BEGIN_CLASS_MEMBER(::helloworld::MainWindow)
				CLASS_MEMBER_CONSTRUCTOR(::helloworld::MainWindow*(::vl::Ptr<::vm::IViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetHasLoggedIn, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetHasLoggedIn, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(buttonSignUp_Clicked, { L"sender" _ L"arguments" })
				CLASS_MEMBER_EVENT(HasLoggedInChanged)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_FIELD(__vwsn_prop_HasLoggedIn)
				CLASS_MEMBER_PROPERTY_EVENT(HasLoggedIn, GetHasLoggedIn, SetHasLoggedIn, HasLoggedInChanged)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::helloworld::MainWindow)

			BEGIN_CLASS_MEMBER(::helloworld::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::helloworld::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(buttonCancel)
				CLASS_MEMBER_FIELD(buttonSignUp)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textBoxPassword)
				CLASS_MEMBER_FIELD(textBoxUserName)
			END_CLASS_MEMBER(::helloworld::MainWindowConstructor)

			BEGIN_INTERFACE_MEMBER(::vm::IViewModel)
				CLASS_MEMBER_METHOD(GetPassword, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetPasswordError, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetUserName, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetUserNameError, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetPassword, { L"value" })
				CLASS_MEMBER_METHOD(SetUserName, { L"value" })
				CLASS_MEMBER_METHOD(SignUp, NO_PARAMETER)
				CLASS_MEMBER_EVENT(PasswordErrorChanged)
				CLASS_MEMBER_EVENT(UserNameErrorChanged)
				CLASS_MEMBER_PROPERTY(Password, GetPassword, SetPassword)
				CLASS_MEMBER_PROPERTY_EVENT_READONLY(PasswordError, GetPasswordError, PasswordErrorChanged)
				CLASS_MEMBER_PROPERTY(UserName, GetUserName, SetUserName)
				CLASS_MEMBER_PROPERTY_EVENT_READONLY(UserNameError, GetUserNameError, UserNameErrorChanged)
			END_INTERFACE_MEMBER(::vm::IViewModel)

#undef _
			class HelloWorldTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::helloworld::MainWindow)
					ADD_TYPE_INFO(::helloworld::MainWindowConstructor)
					ADD_TYPE_INFO(::vm::IViewModel)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadHelloWorldTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<HelloWorldTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKSubcredentialProvisioningConfiguration : NSObject {

	long long _configurationType;

}

@property (nonatomic,readonly) long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
-(long long)configurationType;
-(id)transitionTable;
-(id)remoteDeviceInvitation;
-(id)ownerConfiguration;
-(id)acceptInvitationConfiguration;
-(id)localDeviceConfiguration;
-(id)initWithConfigurationType:(long long)arg1 ;
-(id)remoteDeviceConfiguration;
-(long long)startingState;
@end

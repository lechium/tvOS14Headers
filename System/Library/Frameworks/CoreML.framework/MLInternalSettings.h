/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLInternalSettings : NSObject <NSSecureCoding> {

	BOOL _restrictNeuralNetworksToUseCPUOnly;
	BOOL _restrictNeuralNetworksFromUsingANE;
	BOOL _isNeuralNetworkGPUPathForbidden;

}

@property (assign) BOOL restrictNeuralNetworksToUseCPUOnly;                       //@synthesize restrictNeuralNetworksToUseCPUOnly=_restrictNeuralNetworksToUseCPUOnly - In the implementation block
@property (assign) BOOL restrictNeuralNetworksFromUsingANE;                       //@synthesize restrictNeuralNetworksFromUsingANE=_restrictNeuralNetworksFromUsingANE - In the implementation block
@property (nonatomic,readonly) BOOL isNeuralNetworkGPUPathForbidden;              //@synthesize isNeuralNetworkGPUPathForbidden=_isNeuralNetworkGPUPathForbidden - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)globalSettings;
+(id)globalSettingsFromSettings:(id)arg1 ;
+(BOOL)deviceHasANE;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)restrictNeuralNetworksToUseCPUOnly;
-(void)setRestrictNeuralNetworksToUseCPUOnly:(BOOL)arg1 ;
-(BOOL)restrictNeuralNetworksFromUsingANE;
-(void)setRestrictNeuralNetworksFromUsingANE:(BOOL)arg1 ;
-(BOOL)isNeuralNetworkGPUPathForbidden;
@end

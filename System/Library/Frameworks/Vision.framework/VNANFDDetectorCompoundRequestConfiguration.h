/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSDictionary, NSMutableArray, NSString;

@interface VNANFDDetectorCompoundRequestConfiguration : VNRequestConfiguration {

	NSDictionary* _detectorConfigurationOptions;
	NSMutableArray* _originalRequests;
	NSString* _detectorType;

}

@property (nonatomic,copy) NSDictionary * detectorConfigurationOptions;              //@synthesize detectorConfigurationOptions=_detectorConfigurationOptions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * originalRequests;                    //@synthesize originalRequests=_originalRequests - In the implementation block
@property (nonatomic,copy) NSString * detectorType;                                  //@synthesize detectorType=_detectorType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)originalRequests;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2 ;
-(NSDictionary *)detectorConfigurationOptions;
-(NSString *)detectorType;
-(void)setDetectorType:(NSString *)arg1 ;
-(void)setDetectorConfigurationOptions:(NSDictionary *)arg1 ;
-(void)setResolvedRevision:(unsigned long long)arg1 ;
@end


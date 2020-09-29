/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FigCaptureRecordingSettings : NSObject <NSSecureCoding, NSCopying> {

	long long _settingsID;
	NSURL* _outputURL;
	NSString* _outputFileType;
	SCD_Struct_BW36 _maxDuration;
	long long _maxFileSize;
	long long _minFreeDiskSpaceLimit;

}

@property (assign,nonatomic) long long settingsID;                         //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                              //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,copy) NSString * outputFileType;                      //@synthesize outputFileType=_outputFileType - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW36 maxDuration;                  //@synthesize maxDuration=_maxDuration - In the implementation block
@property (assign,nonatomic) long long maxFileSize;                        //@synthesize maxFileSize=_maxFileSize - In the implementation block
@property (assign,nonatomic) long long minFreeDiskSpaceLimit;              //@synthesize minFreeDiskSpaceLimit=_minFreeDiskSpaceLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSURL *)outputURL;
-(void)setOutputFileType:(NSString *)arg1 ;
-(NSString *)outputFileType;
-(SCD_Struct_BW36)maxDuration;
-(void)setMaxDuration:(SCD_Struct_BW36)arg1 ;
-(long long)settingsID;
-(void)setSettingsID:(long long)arg1 ;
-(long long)minFreeDiskSpaceLimit;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
-(long long)maxFileSize;
-(void)setMaxFileSize:(long long)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFVersion.h>

@class NSString;

@interface HMFSoftwareVersion : HMFVersion {

	NSString* _buildVersion;

}

@property (copy,readonly) NSString * buildVersion;                    //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy,readonly) NSString * shortVersionString; 
+(BOOL)supportsSecureCoding;
+(id)versionFromOperatingSystemVersion:(SCD_Struct_HM6)arg1 ;
-(id)localizedDescription;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_HM6)operatingSystemVersion;
-(NSString *)shortVersionString;
-(NSString *)buildVersion;
-(id)versionString;
-(id)initWithVersionString:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4 ;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 ;
@end

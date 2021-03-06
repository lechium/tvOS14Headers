/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface VNBlacklist : NSObject <NSCopying> {

	NSSet* _identifiers;

}

@property (readonly) unsigned long long identifierCount; 
@property (copy,readonly) NSSet * allIdentifiers; 
+(id)blacklistFromUTF8StringArray:(const char**)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)allIdentifiers;
-(id)initWithIdentifiers:(id)arg1 ;
-(unsigned long long)identifierCount;
-(BOOL)containsIdentifier:(id)arg1 ;
@end


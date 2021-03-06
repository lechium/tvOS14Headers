/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface VSCasePreservingString : NSString {

	NSString* _underlyingString;

}
-(unsigned long long)length;
-(id)lowercaseStringWithLocale:(id)arg1 ;
-(id)uppercaseStringWithLocale:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 ;
-(id)lowercaseString;
-(id)uppercaseString;
-(id)capitalizedString;
-(id)capitalizedStringWithLocale:(id)arg1 ;
-(id)localizedUppercaseString;
-(id)localizedLowercaseString;
-(id)localizedCapitalizedString;
@end


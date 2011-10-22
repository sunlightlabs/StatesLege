#import <RestKit/RestKit.h>
#import <RestKit/CoreData/CoreData.h>
#import "_SLFLegislator.h"

@class SLFState;
@class SLFChamber;
@class SLFParty;
@interface SLFLegislator : _SLFLegislator {}
@property (nonatomic,readonly) SLFState *state;
@property (nonatomic, readonly) NSArray *sortedRoles;
@property (nonatomic, readonly) NSString *districtID;
@property (nonatomic, readonly) SLFDistrict *hydratedDistrict;
@property (nonatomic, readonly) NSString *term;
@property (nonatomic, readonly) SLFParty *partyObj;
@property (nonatomic, readonly) SLFChamber *chamberObj;
@property (nonatomic, readonly) NSString *fullNameLastFirst;
@property (nonatomic, readonly) NSString *lastnameInitial;
@property (nonatomic, readonly) NSString *chamberShortName;
@property (nonatomic, readonly) NSString *partyShortName;
@property (nonatomic, readonly) NSString *demoLongName;
@property (nonatomic, readonly) NSString *districtMapLabel;
@property (nonatomic, readonly) NSString *votesmartBio;

- (NSComparisonResult)compareMembersByName:(SLFLegislator *)p;
- (NSString *)districtPartyString;
- (NSString *)shortNameForButtons;
- (NSString *)labelSubText;
- (NSString *)title;
@end
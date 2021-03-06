#ifndef DMRECON_GLOBALVIEWSELECTION_H
#define DMRECON_GLOBALVIEWSELECTION_H

#include <map>

#include "mve/bundlefile.h"
#include "dmrecon/SingleView.h"
#include "dmrecon/ViewSelection.h"

MVS_NAMESPACE_BEGIN

class GlobalViewSelection : public ViewSelection
{
public:
    GlobalViewSelection(SingleViewPtrList const& views,
        mve::BundleFile::FeaturePoints const& features,
        Settings const& settings);
    void performVS();

private:
    float benefitFromView(std::size_t i);

    SingleViewPtrList const& views;
    mve::BundleFile::FeaturePoints const& features;
};

MVS_NAMESPACE_END

#endif
